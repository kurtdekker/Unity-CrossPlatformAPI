#import <Foundation/Foundation.h>



@interface SaveToAlbumObj : NSObject
{
    
}


- (void) save:(NSString*) filename;

- (void)image:(UIImage *)image didFinishSavingWithError:(NSError *)error contextInfo:(void *)contextInfo;

@end


@interface ShareViewController : UIViewController
{

}

- (void) shareText:(NSString*) text;
- (void) shareImage:(NSString*) filename text:(NSString*)text;

@end