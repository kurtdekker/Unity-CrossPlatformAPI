using UnityEngine;
using System.Collections;


namespace litefeel
{
    public abstract class PlatformAPI
    {

        public abstract void SaveToAlbum(string filename);
        
        public abstract void PasteToClipboard(string text);

        public abstract string CopyFromClipboard();
    }
}