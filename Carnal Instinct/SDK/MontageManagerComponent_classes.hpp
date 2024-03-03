#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0xB9 - 0xB0)
// BlueprintGeneratedClass MontageManagerComponent.MontageManagerComponent_C
class UMontageManagerComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB0(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	enum class E_MontageAction                   LastRequestedAction;                               // 0xB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UMontageManagerComponent_C* GetDefaultObj();

	void GetLastRequestedAction(enum class E_MontageAction* Action);
	int32 GetRandomMontageIndex(enum class E_MontageAction MontageAction, int32 CallFunc_GetMontageActionLastIndex_LastIndex, int32 CallFunc_RandomIntegerInRange_ReturnValue);
	void GetMontageActionLastIndex(enum class E_MontageAction Action, int32* LastIndex, class AActor* CallFunc_GetOwner_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, TScriptInterface<class II_MontageManagerComponent_C> K2Node_DynamicCast_AsI_Montage_Manager_Component, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_Conv_StringToName_ReturnValue, class UDataTable* CallFunc_GetMontages_Montages, const struct FF_MontageAction& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue);
	void GetMontageForAction(enum class E_MontageAction Action, int32 Index, class UAnimMontage** Montage, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class II_MontageManagerComponent_C> K2Node_DynamicCast_AsI_Montage_Manager_Component, bool K2Node_DynamicCast_bSuccess, class UDataTable* CallFunc_GetMontages_Montages, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FF_MontageAction& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UAnimMontage* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue_1);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_MontageManagerComponent(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, const class FString& CallFunc_GetClassDisplayName_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_DoesImplementInterface_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);
};

}


