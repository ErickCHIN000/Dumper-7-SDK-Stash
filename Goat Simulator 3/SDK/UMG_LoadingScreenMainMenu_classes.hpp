#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF9 (0x611 - 0x518)
// WidgetBlueprintGeneratedClass UMG_LoadingScreenMainMenu.UMG_LoadingScreenMainMenu_C
class UUMG_LoadingScreenMainMenu_C : public UGGLoadingScreen
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x518(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            ContextText;                                       // 0x520(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Goat;                                              // 0x528(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              GoatSizeBox;                                       // 0x530(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          LoadingScreenPanel;                                // 0x538(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            LoadingText;                                       // 0x540(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        LoadingTextContainer;                              // 0x548(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UThrobber*                             Throbber;                                          // 0x550(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLoadingScreenHint                    CurrentHint;                                       // 0x558(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLoadingScreenHint                    LastHint;                                          // 0x5A8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UTexture2D*>                    GoatTextureArray;                                  // 0x5F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        AnimIndex;                                         // 0x608(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TimeSinceAnimUpdate;                               // 0x60C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowBlack;                                         // 0x610(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UUMG_LoadingScreenMainMenu_C* GetDefaultObj();

	void ApplyMobilePadding(float CallFunc_CalculateMobilePadding_ReturnValue, class UBorderSlot* CallFunc_SlotAsBorderSlot_ReturnValue, float CallFunc_FMax_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin);
	void GoatWalkTexture(int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Array_Length_ReturnValue, class UTexture2D* CallFunc_Array_Get_Item, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UMG_LoadingScreenMainMenu(int32 EntryPoint, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGGGameInstance* K2Node_DynamicCast_AsGGGame_Instance, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_IsMobilePlatform_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1);
};

}


