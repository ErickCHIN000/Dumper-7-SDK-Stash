#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x108 - 0xB8)
// BlueprintGeneratedClass RadiationComponent.RadiationComponent_C
class URadiationComponent_C : public UBaseComponent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       MaxRadiation;                                      // 0xC0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CurrentRadiation;                                  // 0xC8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          RadiationHandle;                                   // 0xD0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       ReduceRadiationAmount;                             // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          RadiationDamageHandle;                             // 0xE0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       RadDeduction;                                      // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InRadArea;                                         // 0xF0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43F4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       Geiger;                                            // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          FilterHandle;                                      // 0x100(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class URadiationComponent_C* GetDefaultObj();

	void UseFilter(double MinusDur, double* NewDur, bool* Successful_, class UBP_JigMultiplayer_C* JigRef, enum class EPlayerSlots Temp_byte_Variable, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IBPI_Player_C> K2Node_DynamicCast_AsBPI_Player, bool K2Node_DynamicCast_bSuccess, class UBP_JigMultiplayer_C* CallFunc_GetComponentByClass_ReturnValue, class ABP_PlayerCharacter_C* CallFunc_GetPlayerRef_Player, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FContainerPickupsInfo& CallFunc_GetItemByUID_Item, bool CallFunc_GetItemByUID_Found, bool CallFunc_GetItemByUID_InMainContainer_, bool CallFunc_GetContainerItemByInContainerIndex_Found_, const struct FContainerPickupsInfo& CallFunc_GetContainerItemByInContainerIndex_FoundItem, double CallFunc_ServerFunc_UpdateDurabilityByUID_Item_NewDur, bool CallFunc_NotEqual_DoubleDouble_ReturnValue);
	void DecreaseRadiation(double ReduceAmount, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBPI_Player_C> K2Node_DynamicCast_AsBPI_Player, bool K2Node_DynamicCast_bSuccess, double CallFunc_Subtract_DoubleDouble_ReturnValue_2, double CallFunc_FClamp_ReturnValue, float CallFunc_SpawnSound2D_VolumeMultiplier_ImplicitCast, float CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast);
	void IncreaseRadiation(double Amount, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_1, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_NotEqual_DoubleDouble_ReturnValue_1, class UMedicalComponent_C* CallFunc_GetComponentByClass_ReturnValue, TScriptInterface<class IBPI_Player_C> K2Node_DynamicCast_AsBPI_Player, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBPI_Player_C> K2Node_DynamicCast_AsBPI_Player_1, bool K2Node_DynamicCast_bSuccess_1, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, float CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast);
	void ApplyRadiationDamage(class UMedicalComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, float CallFunc_ApplyDamage_ReturnValue);
	void RadiationTimer(double CallFunc_UseFilter_NewDur, bool CallFunc_UseFilter_Successful_, double CallFunc_UseFilter_NewDur_1, bool CallFunc_UseFilter_Successful__1, double CallFunc_UseFilter_NewDur_2, bool CallFunc_UseFilter_Successful__2, double CallFunc_UseFilter_NewDur_3, bool CallFunc_UseFilter_Successful__3, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class ABP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBP_MpInteractInterface_C> K2Node_DynamicCast_AsBP_Mp_Interact_Interface, bool K2Node_DynamicCast_bSuccess_1, const struct FFItemInfo& CallFunc_GetItemInfo_Info, const struct FS_RandomStatsConfig& CallFunc_GetItemInfo_RandomStatsConfig, bool K2Node_SwitchName_CmpSuccess);
	void ComponentLoaded();
	void ComponentPreSave();
	void UpdateRadiation(double RadDeduct, bool SelectRadDeduct_);
	void CheckStats();
	void UpdateGeiger();
	void UpdateFilter();
	void Mask_Filter();
	void ExecuteUbergraph_RadiationComponent(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, double K2Node_CustomEvent_RadDeduct, bool K2Node_CustomEvent_SelectRadDeduct_, class ABP_PlayerCharacter_C* CallFunc_CastToCharacter_Character, double CallFunc_SelectFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsActive_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, double CallFunc_UseFilter_NewDur, bool CallFunc_UseFilter_Successful_, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, float CallFunc_K2_SetTimer_Time_ImplicitCast, float CallFunc_RetriggerableDelay_Duration_ImplicitCast);
};

}


