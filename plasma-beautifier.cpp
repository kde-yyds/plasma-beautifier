#include <iostream>
#include <fstream>
using namespace std;
int lightly_installed=0,klassy_installed=0;
void plasma_version()
{
    system("kwin --version >/tmp/kwinversion");
    ifstream kwinversion("/tmp/kwinversion");
    float version;
    char c;
    int i=0;
    while(!kwinversion.eof())
    {
        i++;
        kwinversion>>c;
         if(i>=5&&i<=8)cout<<c;
    }    
}
void install_lightly()
{
    system("mkdir /tmp/lightly");
    system("sudo apt install cmake build-essential libkf5config-dev libkdecorations2-dev libqt5x11extras5-dev qtdeclarative5-dev extra-cmake-modules libkf5guiaddons-dev libkf5configwidgets-dev libkf5windowsystem-dev libkf5coreaddons-dev libkf5iconthemes-dev gettext qt3d5-dev -y");
    system("sudo pacman -S cmake extra-cmake-modules kdecoration qt5-declarative qt5-x11extras");
    system("sudo dnf install cmake extra-cmake-modules \"cmake(Qt5Core)\" \"cmake(Qt5Gui)\" \"cmake(Qt5DBus)\" \"cmake(Qt5X11Extras)\" \"cmake(KF5GuiAddons)\" \"cmake(KF5WindowSystem)\" \"cmake(KF5I18n)\" \"cmake(KDecoration2)\" \"cmake(KF5CoreAddons)\" \"cmake(KF5ConfigWidgets)\" \"cmake(Qt5UiTools)\" \"cmake(KF5GlobalAccel)\" \"cmake(KF5IconThemes)\" kwin-devel libepoxy-devel \"cmake(KF5Init)\" \"cmake(KF5Crash)\" \"cmake(KF5KIO)\" \"cmake(KF5Notifications)\" kf5-kpackage-devel");
    system("sudo zypper install cmake gcc-c++ extra-cmake-modules libQt5Gui-devel libQt5DBus-devel libqt5-qttools-devel libqt5-qtx11extras-devel libQt5OpenGL-devel libQt5Network-devel libepoxy-devel kconfig-devel kconfigwidgets-devel kcrash-devel kglobalaccel-devel ki18n-devel kio-devel kservice-devel kinit-devel knotifications-devel kwindowsystem-devel kguiaddons-devel kiconthemes-devel kpackage-devel kwin5-devel xcb-util-devel xcb-util-cursor-devel xcb-util-wm-devel xcb-util-keysyms-devel");
    system("sudo eopkg install extra-cmake-modules kdecoration-devel qt5-declarative-devel qt5-x11extras-devel qt5-base-devel kcoreaddons-devel kguiaddons-devel kconfigwidgets-devel kwindowsystem-devel ki18n-devel kiconthemes-devel kcmutils-devel libxcb-devel xcb-util-devel qt5-wayland-devel kwayland-devel wayland-devel frameworkintegration-devel");
    system("tar -xvf /usr/lib/plasma-beautifier/data/Lightly.tar.xz -C /tmp/lightly/");
    system("mkdir /tmp/lightly/Lightly/build");
    system("cd /tmp/lightly/Lightly/build && cmake .. && make -j4 && sudo make install");
    lightly_installed=1;
}
void install_klassy()
{
    system("mkdir /tmp/klassy");
    system("sudo apt install cmake build-essential libkf5config-dev libkdecorations2-dev libqt5x11extras5-dev qtdeclarative5-dev extra-cmake-modules libkf5guiaddons-dev libkf5configwidgets-dev libkf5windowsystem-dev libkf5coreaddons-dev libkf5iconthemes-dev gettext qt3d5-dev -y");
    system("sudo pacman -S cmake extra-cmake-modules kdecoration qt5-declarative qt5-x11extras");
    system("sudo dnf install cmake extra-cmake-modules \"cmake(Qt5Core)\" \"cmake(Qt5Gui)\" \"cmake(Qt5DBus)\" \"cmake(Qt5X11Extras)\" \"cmake(KF5GuiAddons)\" \"cmake(KF5WindowSystem)\" \"cmake(KF5I18n)\" \"cmake(KDecoration2)\" \"cmake(KF5CoreAddons)\" \"cmake(KF5ConfigWidgets)\" \"cmake(Qt5UiTools)\" \"cmake(KF5GlobalAccel)\" \"cmake(KF5IconThemes)\" kwin-devel libepoxy-devel \"cmake(KF5Init)\" \"cmake(KF5Crash)\" \"cmake(KF5KIO)\" \"cmake(KF5Notifications)\" kf5-kpackage-devel");
    system("sudo zypper install cmake gcc-c++ extra-cmake-modules libQt5Gui-devel libQt5DBus-devel libqt5-qttools-devel libqt5-qtx11extras-devel libQt5OpenGL-devel libQt5Network-devel libepoxy-devel kconfig-devel kconfigwidgets-devel kcrash-devel kglobalaccel-devel ki18n-devel kio-devel kservice-devel kinit-devel knotifications-devel kwindowsystem-devel kguiaddons-devel kiconthemes-devel kpackage-devel kwin5-devel xcb-util-devel xcb-util-cursor-devel xcb-util-wm-devel xcb-util-keysyms-devel");
    system("sudo eopkg install extra-cmake-modules kdecoration-devel qt5-declarative-devel qt5-x11extras-devel qt5-base-devel kcoreaddons-devel kguiaddons-devel kconfigwidgets-devel kwindowsystem-devel ki18n-devel kiconthemes-devel kcmutils-devel libxcb-devel xcb-util-devel qt5-wayland-devel kwayland-devel wayland-devel frameworkintegration-devel");
    system("tar -xvf /usr/lib/plasma-beautifier/data/klassy.tar.xz -C /tmp/klassy");
    system("mkdir -p /tmp/klassy/klassy/build");
    system("cd /tmp/klassy/klassy/build && cmake .. && make -j4 && sudo make install");    
    klassy_installed=1;
}
void install_Deepin_v20_desktoptheme()
{
    system("mkdir -p ~/.local/share/plasma/desktoptheme");
    system("tar -xvf /usr/lib/plasma-beautifier/data/desktoptheme-DeepinV20-dark.tar.xz -C ~/");
}
void install_lightly_transparent_color_theme()
{
    system("sudo cp -r /usr/lib/plasma-beautifier/data/Lightly-transparent.colors /usr/share/color-schemes/");
}
void main2()
{
    cout<<"欢迎使用KDE Plasma美化工具\nhttps://github.com/kde-yyds/plasma-beautifier\n\n";
    cout<<"KDE Plasma版本：";
    plasma_version();
    cout<<"\n\n\n";
    cout<<"[1]安装一个qt应用程序风格\n";
    cout<<"[2]安装一个Plasma视觉风格\n";
    cout<<"[3]安装一个窗口装饰\n";
    cout<<"[4]安装一个透明的颜色主题\n";
    cout<<"[Ctrl+C]退出\n";
    cout<<" : ";
    int t;
    cin>>t;
    if(t==1)
    {
        cout<<"正在安装Lightly <https://github.com/Luwx/Lightly>\n";
        if(lightly_installed==0) install_lightly();
        system("cp -r /usr/lib/plasma-beautifier/data/lightlyrc ~/.config/");
        cout<<"安装完毕，请打开KDE系统设置->外观->应用程序风格 切换成Lightly\n按enter继续\n";
        getchar();getchar();
        main2();
    }
    if(t==2)
    {
        cout<<"正在安装DeepinV20-dark<https://www.pling.com/p/1413900>\n";
        install_Deepin_v20_desktoptheme();
        cout<<"安装完毕，请打开KDE系统设置->外观->Plasma视觉风格 切换成Deepin-v20\n按enter继续\n";
        getchar();getchar();
        main2();
    }
    if(t==3)
    {
        cout<<"请选择一个窗口装饰：\n";
        cout<<"[1]Lightly(如果你使用KDE Plasma5.24及更低版本，此窗口装饰可以开启半透明模糊)\n";
        cout<<"[2]Klassy(如果你使用KDE Plasma 5.25及以上版本，此窗口装饰可以开启模糊，但上面那个不行\n:";
        int c;
        cin>>c;
        if(c==1)
        {
            if(lightly_installed==0) install_lightly();
            system("cp -r /usr/lib/plasma-beautifier/data/lightlyrc ~/.config/");
            cout<<"安装完毕，请打开KDE系统设置->外观->窗口装饰元素 切换成Lightly\n按enter继续\n";
        }
        if(c==2)
        {
            if(klassy_installed==0) install_klassy();
            system("cp -r /usr/lib/plasma-beautifier/data/klassyrc ~/.config/");
            cout<<"安装完毕，请打开KDE系统设置->外观->窗口装饰元素 切换成Klassy\n";
        }
        getchar();
        getchar();
        main2();
    }
    if(t==4)
    {
        cout<<"正在安装Lightly-transparent（把lightly的颜色主题透明度调高）\n";
        install_lightly_transparent_color_theme();
        cout<<"安装完毕，请打开KDE系统设置->外观->颜色 切换成Lightly-transparent\n按enter继续\n";
        getchar();getchar();
        main2();
    }
}
int main()
{
    system("clear");
    main2();
}
