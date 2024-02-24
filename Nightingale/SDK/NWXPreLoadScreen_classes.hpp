#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x70 - 0x38)
// Class NWXPreLoadScreen.NWXPreLoadScreenSettings
class UNWXPreLoadScreenSettings : public UDeveloperSettings
{
public:
	TArray<class FString>                        StartupMovies;                                     // 0x38(0x10)(Edit, ZeroConstructor, Config, GlobalConfig, NativeAccessSpecifierPublic)
	class FString                                SpinnerImage;                                      // 0x48(0x10)(Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             SpinnerDimensions;                                 // 0x58(0x10)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpinnerPulseAlphaMin;                              // 0x68(0x4)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpinnerPulseHz;                                    // 0x6C(0x4)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNWXPreLoadScreenSettings* GetDefaultObj();

};

}


