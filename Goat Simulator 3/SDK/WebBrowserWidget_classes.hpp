#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x150 - 0x108)
// Class WebBrowserWidget.WebBrowser
class UWebBrowser : public UWidget
{
public:
	FMulticastInlineDelegateProperty_            OnUrlChanged;                                      // 0x108(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnBeforePopup;                                     // 0x118(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FString                                InitialURL;                                        // 0x128(0x10)(Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSupportsTransparency;                             // 0x138(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_398[0x17];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWebBrowser* GetDefaultObj();

	void OnUrlChanged__DelegateSignature(class FText& Text);
	void OnBeforePopup__DelegateSignature(const class FString& URL, const class FString& Frame);
	void LoadURL(const class FString& NewURL);
	void LoadString(const class FString& Contents, const class FString& DummyURL);
	class FString GetUrl();
	class FText GetTitleText();
	void ExecuteJavascript(const class FString& ScriptText);
};

// 0x50 (0x78 - 0x28)
// Class WebBrowserWidget.WebBrowserAssetManager
class UWebBrowserAssetManager : public UObject
{
public:
	TSoftObjectPtr<class UMaterial>              DefaultMaterial;                                   // 0x28(0x28)(Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3A9[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWebBrowserAssetManager* GetDefaultObj();

};

}


