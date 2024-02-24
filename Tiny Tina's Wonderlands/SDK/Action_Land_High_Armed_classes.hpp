#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x228 - 0x220)
// BlueprintGeneratedClass Action_Land_High_Armed.Action_Land_High_Armed_C
class UAction_Land_High_Armed_C : public UOakAction_Anim
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAction_Land_High_Armed_C* GetDefaultObj();

	void OnBegin(class AActor* Actor);
	void ExecuteUbergraph_Action_Land_High_Armed(int32 EntryPoint, class AActor* K2Node_Event_Actor, class AWeapon* CallFunc_K2_GetWeapon_ReturnValue, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue, bool CallFunc_IsZoomed_ReturnValue);
};

}


