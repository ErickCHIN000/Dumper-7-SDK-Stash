#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x390 - 0x340)
// WidgetBlueprintGeneratedClass WBP_sw_RealmExamine_CardsPlayed.WBP_sw_RealmExamine_CardsPlayed_C
class UWBP_sw_RealmExamine_CardsPlayed_C : public UNWXUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                        Hb_minor_cards;                                    // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_sw_Readiness_RealmCard_C*         RealmCard0_Biome;                                  // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_sw_Readiness_RealmCard_C*         RealmCard1_Major;                                  // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_sw_Readiness_RealmCard_C*         RealmCard2_Minor;                                  // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_sw_Readiness_RealmCard_C*         RealmCard3_Minor;                                  // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_sw_Readiness_RealmCard_C*         RealmCard4_Minor;                                  // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         CurrentRealm;                                      // 0x378(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_38B8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWBP_sw_Readiness_RealmCard_C*> RealmCardWidgets;                                  // 0x380(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UWBP_sw_RealmExamine_CardsPlayed_C* GetDefaultObj();

	void SetupCardsUsed(const TArray<class UWBP_sw_Readiness_RealmCard_C*>& LCardsOnScreen, int32 L_CurrentIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWBP_sw_Readiness_RealmCard_C* CallFunc_Array_Get_Item, class UWBP_GenericTooltip_C* CallFunc_Create_ReturnValue, class ANWXGameStateBase* CallFunc_GetNWXGameStateBase_ReturnValue, TArray<struct FItemData>& CallFunc_GenerateRealmCardsData_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FItemData& CallFunc_Array_Get_Item_1, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_GetDefaultItemName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void Construct();
	void ExecuteUbergraph_WBP_sw_RealmExamine_CardsPlayed(int32 EntryPoint, TArray<class UWBP_sw_Readiness_RealmCard_C*>& K2Node_MakeArray_Array);
};

}


