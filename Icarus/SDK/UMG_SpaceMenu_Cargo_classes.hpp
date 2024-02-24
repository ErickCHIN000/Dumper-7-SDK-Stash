#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x39 (0x299 - 0x260)
// WidgetBlueprintGeneratedClass UMG_SpaceMenu_Cargo.UMG_SpaceMenu_Cargo_C
class UUMG_SpaceMenu_Cargo_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimateIn;                                         // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UUMG_DropshipSelector_C*               UMG_DropshipSelector;                              // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_InsurancePanel_C*                 UMG_InsurancePanel;                                // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_ItemsOnDropsList_C*               UMG_ItemsOnDropsList;                              // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_MetaInventory_C*                  UMG_MetaInventory;                                 // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_PlayerLoadoutPanel_C*             UMG_PlayerLoadoutPanel;                            // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         Initialised;                                       // 0x298(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UUMG_SpaceMenu_Cargo_C* GetDefaultObj();

	void GetPlayerLoadoutData(struct FPlayerLoadoutData* LoadoutData, bool CallFunc_GetInsuranceEnabled_Insured, const struct FPlayerLoadoutData& CallFunc_GetPlayerLoadoutData_LoadoutData, const struct FPlayerLoadoutData& K2Node_SetFieldsInStruct_StructOut);
	void GetInsuranceEnabled(bool* Insured, bool CallFunc_GetInsuranceEnabled_Insured);
	void Initialise(const TArray<struct FMetaItem>& LoadoutInventory, const TArray<struct FMetaItem>& Meta_Inventory, const TArray<struct FDropship>& Dropships);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void PlayOpenAnimation();
	void SetPendingProspectInfo(const struct FProspectInfo& ProspectInfo);
	void Construct();
	void ExecuteUbergraph_UMG_SpaceMenu_Cargo(int32 EntryPoint, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const struct FProspectInfo& K2Node_CustomEvent_ProspectInfo);
};

}


