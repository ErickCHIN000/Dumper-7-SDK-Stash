#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x540 (0x7A0 - 0x260)
// WidgetBlueprintGeneratedClass UMG_ItemsOnDrop.UMG_ItemsOnDrop_C
class UUMG_ItemsOnDrop_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            CharName;                                          // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            CharName_1;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               InsuranceOverlay;                                  // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_DisplayOnlyInventory_C*           Inventory;                                         // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               LoadoutButton;                                     // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            NoItems;                                           // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ProspectName;                                      // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ProspectOwner;                                     // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               SettledOverlay;                                    // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         Insured;                                           // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5AA6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FProspectInfo                         ProspectInfo;                                      // 0x2B8(0x90)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  HostName;                                          // 0x348(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FItemData>                     Items;                                             // 0x360(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class FText                                  CharacterName;                                     // 0x370(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  DropName;                                          // 0x388(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPlayerLoadoutData                    PlayerLoadoutData;                                 // 0x3A0(0x3D0)(Edit, BlueprintVisible, ContainsInstancedReference, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_            OnInsuranceClaimed;                                // 0x770(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UUMG_InsuranceClaimPopup_C*            CurrentPopup;                                      // 0x780(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Settled;                                           // 0x788(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         CanReclaimLoadout;                                 // 0x789(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_5ACC[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnLoadoutDeleted;                                  // 0x790(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UUMG_ItemsOnDrop_C* GetDefaultObj();

	void CacheDropName(bool Temp_bool_Variable, class FText CallFunc_Conv_StringToText_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FProspectListRowHandle& CallFunc_MakeProspectList_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, const struct FIcarusProspect& CallFunc_GetProspectListStruct_ProspectList, enum class EValid CallFunc_GetProspectListStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText K2Node_Select_Default);
	void GetCharacterName(enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FOnlineProfileCharacter& CallFunc_GetCharacterProfile_CharacterProfile, bool CallFunc_GetCharacterProfile_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void GatherItems(enum class ESlateVisibility Temp_byte_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class EDataValid CallFunc_ItemDataValid_Paths, bool K2Node_SwitchEnum_CmpSuccess, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, int32 CallFunc_Array_Add_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void OnFailure_25A6710546032D088E33AA9D784DA123(const struct FGetIcarusPlayerPersonaResult& Result);
	void OnSuccess_25A6710546032D088E33AA9D784DA123(const struct FGetIcarusPlayerPersonaResult& Result);
	void Construct();
	void EDITOR_FillData();
	void BndEvt__UMG_ItemsOnDrop_Button_30_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ShowInsurancePopup();
	void OnInsurancePopupClosed();
	void OnClaimInsurance();
	void GetHostInfo();
	void OnDeleteLoadout();
	void ResetUI();
	void Reconstruct(const struct FPlayerLoadoutData& PlayerLoadoutData);
	void ExecuteUbergraph_UMG_ItemsOnDrop(int32 EntryPoint, class UUMG_InsuranceClaimPopup_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, const struct FGetIcarusPlayerPersonaResult& K2Node_CustomEvent_Result_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FGetIcarusPlayerPersonaResult& K2Node_CustomEvent_Result, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FGetIcarusPlayerPersonaResult& Temp_struct_Variable, enum class ESlateVisibility Temp_byte_Variable_2, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class UPlayerDataComponent* CallFunc_GetPlayerDataComponent_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class FText CallFunc_Conv_StringToText_ReturnValue, class URequestPlayerPersona* CallFunc_IcarusRequestPlayerPersona_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_IsValid_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerController_IsValid_1, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_1, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess, class UPlayerDataComponent* CallFunc_GetPlayerDataComponent_ReturnValue_1, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, bool K2Node_SwitchEnum_CmpSuccess_2, enum class ESlateVisibility Temp_byte_Variable_3, int32 CallFunc_GetTimeUntilInsuranceClaimable_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerController_IsValid_2, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_2, class UPlayerDataComponent* CallFunc_GetPlayerDataComponent_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess_3, enum class EValid CallFunc_GetIcarusPlayerController_IsValid_3, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_3, bool Temp_bool_Variable_1, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface_1, bool K2Node_DynamicCast_bSuccess_1, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface_1, enum class ESlateVisibility K2Node_Select_Default, bool K2Node_SwitchEnum_CmpSuccess_4, enum class ESlateVisibility K2Node_Select_Default_1, const struct FPlayerLoadoutData& K2Node_CustomEvent_PlayerLoadoutData);
	void OnLoadoutDeleted__DelegateSignature();
	void OnInsuranceClaimed__DelegateSignature();
};

}


