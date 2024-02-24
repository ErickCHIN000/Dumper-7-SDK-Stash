#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x968 - 0x958)
// BlueprintGeneratedClass BPWeaponFireProjectileComponent_KaoKhan.BPWeaponFireProjectileComponent_KaoKhan_C
class UBPWeaponFireProjectileComponent_KaoKhan_C : public UWeaponFireProjectileComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x958(0x8)(Transient, DuplicateTransient)
	struct FTimerHandle                          KaoTimer;                                          // 0x960(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UBPWeaponFireProjectileComponent_KaoKhan_C* GetDefaultObj();

	class UClass* GetElementFromHealthType(class AActor* Actor, bool TypeFound, class UClass* ProjDamageType, int32 Temp_int_Loop_Counter_Variable, class UOakDamageComponent* CallFunc_GetComponentByClass_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool K2Node_SwitchName_CmpSuccess, bool Temp_bool_Variable, class UClass* K2Node_Select_Default, class UGameResourcePoolManagerComponent* CallFunc_GetComponentByClass_ReturnValue1, const struct FGameResourcePoolReference& CallFunc_GetResourcePoolByResource_ReturnValue, bool CallFunc_IsResourcePoolInState_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1);
	void ReceiveBeginPlay();
	void KaoKhan_OnUsed();
	void SetSpreadToDefault();
	void ReloadFinished(class AWeapon* EventWeapon, bool bCompleted, bool bAmmoGiven);
	void ExecuteUbergraph_BPWeaponFireProjectileComponent_KaoKhan(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AWeapon* K2Node_CustomEvent_EventWeapon, bool K2Node_CustomEvent_bCompleted, bool K2Node_CustomEvent_bAmmoGiven, class AWeapon* CallFunc_GetWeapon_ReturnValue);
};

}


