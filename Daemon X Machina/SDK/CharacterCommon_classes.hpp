#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x1248 - 0x1230)
// BlueprintGeneratedClass CharacterCommon.CharacterCommon_C
class ACharacterCommon_C : public ATTLCharacterCommon
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1230(0x8)(Transient, DuplicateTransient)
	class UCameraComponent*                      Camera;                                            // 0x1238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                   SpringArm;                                         // 0x1240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ACharacterCommon_C* GetDefaultObj();

	void UserConstructionScript();
	void CameraArm_SetTargetOffset(const struct FVector& Offset, float Time);
	void ExecuteUbergraph_CharacterCommon(int32 EntryPoint, bool CallFunc_IsLocallyControlledPlayer_ReturnValue, const struct FVector& K2Node_Event_Offset, float K2Node_Event_Time, class AController* CallFunc_GetController_ReturnValue, class AArsenalController_C* K2Node_DynamicCast_AsArsenal_Controller, bool K2Node_DynamicCast_bSuccess, class UDefaultCameraControlComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


