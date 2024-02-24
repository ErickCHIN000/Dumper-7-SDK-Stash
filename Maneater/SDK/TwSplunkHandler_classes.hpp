#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x48 - 0x28)
// Class TwSplunkHandler.SplunkFunctionLibrary
class USplunkFunctionLibrary : public UObject
{
public:
	class FString                                SplunkURL;                                         // 0x28(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SplunkToken;                                       // 0x38(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USplunkFunctionLibrary* GetDefaultObj();

	void SendToSplunk(TMap<class FString, class FString> UserPayload);
};

}


