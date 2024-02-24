#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1B4 (0x6CC - 0x518)
// WidgetBlueprintGeneratedClass UMG_LoadingScreen_InGame.UMG_LoadingScreen_InGame_C
class UUMG_LoadingScreen_InGame_C : public UGGTeleportLoadingScreen
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x518(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            ContextText;                                       // 0x520(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Goat;                                              // 0x528(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              GoatSizeBox;                                       // 0x530(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          LoadingScreenPanel;                                // 0x538(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        LoadingTextContainer;                              // 0x540(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Logo;                                              // 0x548(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ProgressText;                                      // 0x550(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UThrobber*                             Throbber_1;                                        // 0x558(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLoadingScreenHint                    CurrentHint;                                       // 0x560(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLoadingScreenHint                    LastHint;                                          // 0x5B0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UTexture2D*>                    GoatTextureArray;                                  // 0x600(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        AnimIndex;                                         // 0x610(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TimeSinceAnimUpdate;                               // 0x614(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLoadingScreenHint                    CurrentProgress;                                   // 0x618(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLoadingScreenHint                    LastProgress;                                      // 0x668(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        TimeSinceProgressUpdate;                           // 0x6B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C7B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGMenuUserWidget*                     LastActiveWidget;                                  // 0x6C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MobileLoadingTextFontSize;                         // 0x6C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_LoadingScreen_InGame_C* GetDefaultObj();

	void ApplyMobilePadding(float OriginalGoatX, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, const struct FVector2D& CallFunc_GetPosition_ReturnValue, const struct FVector2D& CallFunc_GetPosition_ReturnValue_1, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_CalculateMobilePadding_ReturnValue, float CallFunc_FMax_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1);
	void GetLoadingScreenProgress();
	void GoatWalkTexture(int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Array_Length_ReturnValue, class UTexture2D* CallFunc_Array_Get_Item, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void InitializeLoadingScreen(TArray<struct FLoadingWidgetParameter>& WidgetParameters);
	void Destruct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UMG_LoadingScreen_InGame(int32 EntryPoint, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UGGGameInstance* K2Node_DynamicCast_AsGGGame_Instance, bool K2Node_DynamicCast_bSuccess, float CallFunc_Add_FloatFloat_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, TArray<struct FLoadingWidgetParameter>& K2Node_Event_WidgetParameters, class UGGMenuUserWidget* CallFunc_GetTopMenu_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, bool K2Node_Event_IsDesignTime, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_IsMobilePlatform_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1);
};

}


