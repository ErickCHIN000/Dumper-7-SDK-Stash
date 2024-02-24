#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xDA (0x33A - 0x260)
// WidgetBlueprintGeneratedClass wid_AvatarSubtitleEntry.wid_AvatarSubtitleEntry_C
class UWid_AvatarSubtitleEntry_C : public USubtitleEntry
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                      FadeIn;                                            // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UOverlay*                              ActorLeft;                                         // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ActorNameLeft;                                     // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ActorNameRight;                                    // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              ActorRight;                                        // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                AvatarLeft;                                        // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            AvatarLeftScrollBox;                               // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                AvatarRight;                                       // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            AvatarRightScrollBox;                              // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Background;                                        // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                BackgroundEnding;                                  // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               RootBorder;                                        // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text;                                              // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VisibilityContainer;                               // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            DestroyMe;                                         // 0x2D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                  ActorName;                                         // 0x2E8(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  SubtitleText;                                      // 0x300(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FName                                  ActorId;                                           // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        Lifetime;                                          // 0x320(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         IsDying;                                           // 0x324(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         AvatarOnLeftSide;                                  // 0x325(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1B08[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               TextMargin;                                        // 0x328(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsInNewGameMenu;                                   // 0x338(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         IsPaused;                                          // 0x339(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UWid_AvatarSubtitleEntry_C* GetDefaultObj();

	void GetActorAvatar(class UTexture2D** Dialogue_Avatar, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, const struct FActorInfo& CallFunc_K2_GetActorInfo_Info, bool CallFunc_K2_GetActorInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void GetCustomOffset(struct FMargin* Offsets, float CallFunc_SelectFloat_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin);
	void Init(bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, enum class ETextJustify Temp_byte_Variable, enum class ETextJustify Temp_byte_Variable_1, bool Temp_bool_Variable_6, class UTexture2D* Temp_object_Variable_2, class UTexture2D* Temp_object_Variable_3, bool Temp_bool_Variable_7, bool Temp_bool_Variable_8, bool Temp_bool_Variable_9, bool Temp_bool_Variable_10, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue, class UImage* K2Node_Select_Default, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, class UImage* K2Node_Select_Default_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_2, const struct FMargin& K2Node_MakeStruct_Margin, const struct FMargin& K2Node_MakeStruct_Margin_1, const struct FMargin& K2Node_Select_Default_2, class UScrollBox* K2Node_Select_Default_3, class UTexture2D* CallFunc_GetActorAvatar_Dialogue_Avatar, int32 CallFunc_Blueprint_GetSizeY_ReturnValue, class UTexture2D* K2Node_Select_Default_4, int32 CallFunc_Blueprint_GetSizeX_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, class UImage* K2Node_Select_Default_5, bool CallFunc_EqualEqual_NameName_ReturnValue, enum class ETextJustify K2Node_Select_Default_6, class UTexture2D* K2Node_Select_Default_7, class UTextBlock* K2Node_Select_Default_8, class UWidget* K2Node_Select_Default_9, class UWidget* K2Node_Select_Default_10);
	void Construct();
	void StartDrainingAlpha();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void SetToRemove();
	void ForceRemoveNow();
	void OnFadeOutFinished();
	void PauseMenuToggled(bool IsPaused);
	void Destruct();
	void BindPhotomodeToggled();
	void UnbindPhotomodeToggled();
	void PhotomodeChanged(bool bIsActivated);
	void ExecuteUbergraph_wid_AvatarSubtitleEntry(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_GetIsEnabled_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_Not_PreBool_ReturnValue_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, bool CallFunc_BooleanAND_ReturnValue_1, bool K2Node_CustomEvent_IsPaused, class ACGGameModeBase* CallFunc_GetCGGameModeBase_ReturnValue, bool K2Node_CustomEvent_bIsActivated, enum class ESlateVisibility K2Node_Select_Default);
	void DestroyMe__DelegateSignature(class UWid_AvatarSubtitleEntry_C* Object);
};

}


