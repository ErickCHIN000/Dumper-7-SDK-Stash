#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x38 - 0x28)
// Class OpenXRHandTracking.LiveLinkOpenXRHandTrackingSourceFactory
class ULiveLinkOpenXRHandTrackingSourceFactory : public ULiveLinkSourceFactory
{
public:
	uint8                                        Pad_4B1[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULiveLinkOpenXRHandTrackingSourceFactory* GetDefaultObj();

};

// 0x58 (0x80 - 0x28)
// Class OpenXRHandTracking.OpenXRHandTrackingLiveLinkRemapAsset
class UOpenXRHandTrackingLiveLinkRemapAsset : public ULiveLinkRetargetAsset
{
public:
	bool                                         bHasMetacarpals;                                   // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRetargetRotationOnly;                             // 0x29(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EQuatSwizzleAxisB                 SwizzleX;                                          // 0x2A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EQuatSwizzleAxisB                 SwizzleY;                                          // 0x2B(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EQuatSwizzleAxisB                 SwizzleZ;                                          // 0x2C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EQuatSwizzleAxisB                 SwizzleW;                                          // 0x2D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C5[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, class FName>               HandTrackingBoneNameMap;                           // 0x30(0x50)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UOpenXRHandTrackingLiveLinkRemapAsset* GetDefaultObj();

};

}


