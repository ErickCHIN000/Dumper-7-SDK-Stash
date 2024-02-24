#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2C (0x404 - 0x3D8)
// BlueprintGeneratedClass EM_Monarch.EM_Monarch_C
class AEM_Monarch_C : public ASexyEventMarker
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ASexyManualCharacter*                  Monarch;                                           // 0x3E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Activated;                                         // 0x3E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_10AC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ASexyEventMarker*                      Keystone;                                          // 0x3F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               KeystoneLocation;                                  // 0x3F8(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AEM_Monarch_C* GetDefaultObj();

	void OnTrigger(bool bFromActivation);
	void Reset();
	void ExecuteUbergraph_EM_Monarch(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_bFromActivation, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue);
};

}


