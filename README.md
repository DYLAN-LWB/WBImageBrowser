# WBImageBrowser
图片浏览器,控制器只支持横屏,图片浏览器可横屏,缩放,下载


    [WBImageBrowserView clearImagesCache];
    
    //listAM 为包含图片地址的数组
    
    WBImageBrowserView *pictureBrowserView = [WBImageBrowserView pictureBrowsweViewWithFrame:[UIScreen mainScreen].bounds delegate:self browserInfoArray:listAM];
    
    pictureBrowserView.orientation = self.interfaceOrientation;
    
    pictureBrowserView.viewController = self;
    
    pictureBrowserView.startIndex = 2;  //开始索引
    
    [pictureBrowserView showInView:[UIApplication sharedApplication].delegate.window];
    
    
    
    // 横竖屏适配请看demo
