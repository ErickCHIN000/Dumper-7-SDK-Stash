#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x270 - 0x1F0)
// Class MagicLeapImageTracker.MagicLeapImageTrackerComponent
class UMagicLeapImageTrackerComponent : public USceneComponent
{
public:
	class UTexture2D*                            TargetImageTexture;                                // 0x1F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x1F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LongerDimension;                                   // 0x208(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsStationary;                                     // 0x20C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseUnreliablePose;                                // 0x20D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D2[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnSetImageTargetSucceeded;                         // 0x210(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSetImageTargetFailed;                            // 0x220(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnImageTargetFound;                                // 0x230(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnImageTargetLost;                                 // 0x240(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnImageTargetUnreliableTracking;                   // 0x250(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D9[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMagicLeapImageTrackerComponent* GetDefaultObj();

	bool SetTargetAsync(class UTexture2D* ImageTarget);
	bool RemoveTargetAsync();
};

// 0x0 (0x28 - 0x28)
// Class MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary
class UMagicLeapImageTrackerFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMagicLeapImageTrackerFunctionLibrary* GetDefaultObj();

	void SetMaxSimultaneousTargets(int32 MaxSimultaneousTargets);
	bool IsImageTrackingEnabled();
	int32 GetMaxSimultaneousTargets();
	void EnableImageTracking(bool bEnable);
};

}


