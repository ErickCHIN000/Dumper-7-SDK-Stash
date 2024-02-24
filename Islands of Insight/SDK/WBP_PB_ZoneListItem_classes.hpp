#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x2A8 - 0x260)
// WidgetBlueprintGeneratedClass WBP_PB_ZoneListItem.WBP_PB_ZoneListItem_C
class UWBP_PB_ZoneListItem_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_PB_MenuButton_C*                  CampaignButton;                                    // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          CampaignProgressBar;                               // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PB_MenuButton_C*                  PuzzleButton;                                      // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ZoneNameText;                                      // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnPuzzleClick;                                     // 0x288(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnCampaignClick;                                   // 0x298(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_PB_ZoneListItem_C* GetDefaultObj();

	void PopulateData(int32 CampaginProgress, int32 CampaignTotal, enum class EMainMapZoneName& ZONE, class UPuzzleDatabase*& PuzzleDatabase);
	void OnPressed_Event_0();
	void OnCampaignClick_Event_0();
	void ExecuteUbergraph_WBP_PB_ZoneListItem(int32 EntryPoint, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class ASophiaCharacter* K2Node_DynamicCast_AsSophia_Character, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 K2Node_CustomEvent_CampaginProgress, int32 K2Node_CustomEvent_CampaignTotal, enum class EMainMapZoneName K2Node_CustomEvent_Zone, class UPuzzleDatabase* K2Node_CustomEvent_PuzzleDatabase, int32 CallFunc_GetZoneCompletion_OutSolved, int32 CallFunc_GetZoneCompletion_OutTotal, int32 CallFunc_GetZoneCompletion_Percent, const class FString& CallFunc_GetZoneCompletion_PercentStr, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class FText CallFunc_Conv_StringToText_ReturnValue_1, class UZoneData* CallFunc_GetZoneData_ReturnValue, class UZoneDataEntry* CallFunc_ZoneEnum_to_Zone_ReturnValue);
	void OnCampaignClick__DelegateSignature(enum class EMainMapZoneName ZoneName);
	void OnPuzzleClick__DelegateSignature(enum class EMainMapZoneName ZoneName);
};

}


