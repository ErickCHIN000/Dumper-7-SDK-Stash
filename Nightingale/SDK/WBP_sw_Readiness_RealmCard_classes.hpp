#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x124 (0x464 - 0x340)
// WidgetBlueprintGeneratedClass WBP_sw_Readiness_RealmCard.WBP_sw_Readiness_RealmCard_C
class UWBP_sw_Readiness_RealmCard_C : public UNWXUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Img_CardArt;                                       // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_RealmPower;                                // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_RealmPower;                                    // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FItemData                             CardData;                                          // 0x360(0xD8)(Edit, BlueprintVisible, ContainsInstancedReference, ExposeOnSpawn)
	int32                                        RealmPowerModifier;                                // 0x438(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FD[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnMouseEnteredRealmCard;                           // 0x440(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnMouseExitedRealmCard;                            // 0x450(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        Zero;                                              // 0x460(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_sw_Readiness_RealmCard_C* GetDefaultObj();

	void SetCardFromCardData(const struct FItemData& CardData);
	void SetCardArtFromCardData(const struct FItemData& CardData, TSoftObjectPtr<class UTexture2D> CallFunc_GetDefaultItemFullSizeIcon_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue);
	void UpdatePowerLevelAndUsageCostText(class FText CallFunc_Conv_IntToText_ReturnValue);
	void GetPowerLevelAndUsageCostFromCardData(const struct FItemData& CardData, const struct FItemData_RealmCard& CallFunc_TryGetItemDataRealmCard_OutData, enum class EGetResult CallFunc_TryGetItemDataRealmCard_Branches, int32 CallFunc_GetRealmCardAssetPowerLevel_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void Refresh();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void ExecuteUbergraph_WBP_sw_Readiness_RealmCard(int32 EntryPoint, class FText CallFunc_Conv_IntToText_ReturnValue, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent_1, const struct FPointerEvent& K2Node_Event_MouseEvent);
	void OnMouseExitedRealmCard__DelegateSignature();
	void OnMouseEnteredRealmCard__DelegateSignature(const struct FItemData& CardData);
};

}


