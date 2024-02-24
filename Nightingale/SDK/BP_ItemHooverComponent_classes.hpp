#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x110 - 0xE8)
// BlueprintGeneratedClass BP_ItemHooverComponent.BP_ItemHooverComponent_C
class UBP_ItemHooverComponent_C : public UItemHooverComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        ResourceThreshold;                                 // 0xF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsOnCoolDown;                                      // 0xF4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BFF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CoolDownTime;                                      // 0xF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C06[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UAkSwitchValue*>                AutoHarvestSwitch;                                 // 0x100(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UBP_ItemHooverComponent_C* GetDefaultObj();

	void PlayHooverSFXMain(class UScopedAkComponent* HooverSFX);
	void Server_TryClaimItemProxy(class AItemProxyBase* ItemProxy, class APawn* ClaimingPawn, bool CallFunc_IsServer_ReturnValue, bool CallFunc_ClaimItem_bSuccess, TArray<struct FGuid>& CallFunc_ClaimItem_ClaimedInstances, TArray<struct FInventoryEntry>& CallFunc_ClaimItem_UnclaimedItems, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void TriggerHooverEndAVFX(bool CallFunc_IsDedicatedServer_ReturnValue);
	void TriggerHooverStepAVFX(TArray<struct FVector>& HooveredItemLocations, class USceneComponent* VFXAttachComponent, class UScopedAkComponent* OneShotScopedAk, class UNiagaraComponent* CurrentNiagaraInstance, const struct FVector& CurrentLocation, int32 Temp_int_Array_Index_Variable, bool CallFunc_Array_IsNotEmpty_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<struct FTransform>& CallFunc_LocationsToTransforms_Transforms, int32 CallFunc_Array_Length_ReturnValue, FDelegateProperty_ Temp_delegate_Variable, double CallFunc_Conv_IntToDouble_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UScopedAkComponent* CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_NVFX_Spawn_System_Attached_SpawnSuccessful, class UNiagaraComponent* CallFunc_NVFX_Spawn_System_Attached_NiagaraSystemSpawned, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, int32 CallFunc_PostAssociatedAkEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FVector& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_SetRTPCValue_Value_ImplicitCast);
	void TriggerHooverStartAVFX(bool CallFunc_IsDedicatedServer_ReturnValue);
	void Cooldown();
	void ExecuteUbergraph_BP_ItemHooverComponent(int32 EntryPoint);
};

}


