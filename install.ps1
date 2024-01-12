Write-Host "Checking for g++..."
$gppPath = Get-Command g++ -ErrorAction SilentlyContinue
$chocoPath = Get-Command choco -ErrorAction SilentlyContinue

if ($null -eq $gppPath) {
    Write-Host "g++ is not installed."
    Write-Host "Attempting install:"
    Write-Host "    Checking for Chocolatey..."

    if ($null -eq $chocoPath) {
        Write-Host "    Chocolatey not found, installing..."
        Invoke-Expression "Set-ExecutionPolicy Bypass -Scope Process -Force; [System.Net.ServicePointManager]::SecurityProtocol = [System.Net.ServicePointManager]::SecurityProtocol -bor 3072; iex ((New-Object System.Net.WebClient).DownloadString('https://community.chocolatey.org/install.ps1'))"
        [Environment]::Refresh()
        $chocoPath = Get-Command choco -ErrorAction SilentlyContinue
        if ($null -eq $chocoPath) {
            Write-Host "    Chocolatey installation failed. Please install gcc manually."
            return
        }
        else {
            Write-Host "    Chocolatey installation successfull."
        }
    }
    else {
        Write-Host "    Chocolatey found."
    }

    Write-Host "    Installing MinGW with Chocolatey"

    Invoke-Expression "choco install mingw"
    [Environment]::Refresh()
    $gppPath = Get-Command g++ -ErrorAction SilentlyContinue
    if ($null -eq $gppPath) {
        Write-Host "    MinGW installation failed. Please install gcc manually."
        return
    }
    else {
        Write-Host "    MinGW installation successfull."
    }

}
else {
    Write-Host "g++ is installed, you're good to go!"
}
