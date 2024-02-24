#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF3 (0x378 - 0x285)
// WidgetBlueprintGeneratedClass ReputationBar.ReputationBar_C
class UReputationBar_C : public UBaseAutoHideWidget_C
{
public:
	uint8                                        Pad_3A3[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x288(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      ANIM_AddExp;                                       // 0x290(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                            AmountText;                                        // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          ExpAdder;                                          // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          ExpProgressBar;                                    // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                LevelBorder;                                       // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            NPCName;                                           // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Value;                                             // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ASHPlayerCharacter*                    Player;                                            // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UExperienceAddText_C*                  AddTextWidget;                                     // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Adder_LastPercent;                                 // 0x2D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsStopped;                                        // 0x2DC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bOvercappedPercent;                                // 0x2DD(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B4[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SaveActualExp;                                     // 0x2E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B6[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class UClass*, struct FUIReputationQueue> Queue;                                             // 0x2E8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        RepToLevel;                                        // 0x338(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RepRecieved;                                       // 0x33C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                NPC;                                               // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ReputationLevel;                                   // 0x348(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPlayedQueue;                                     // 0x34C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B9[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RepCurrent;                                        // 0x350(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BC[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUIReputationQueue                    TempNeutrals;                                      // 0x358(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                NeutralsIntendantClass;                            // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UReputationBar_C* GetDefaultObj();

	struct FSlateColor Get_Color(int32 Temp_int_Variable, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor_3, const struct FSlateColor& K2Node_MakeStruct_SlateColor_4, int32 CallFunc_GetUINpcColor_ID, const struct FSlateColor& K2Node_Select_Default);
	class FText GetRank(class FText CallFunc_Conv_IntToText_ReturnValue);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnReputationExpChanged(class UClass* NPC, float ReputationCurrentExperience, float ReputationExperienceToLevel, float ReputationExperienceReceived, int32 ReputationLevel);
	void UpdateQueue();
	void OnNeutralReputationChanged(float NeutralsCurrentExperience, float NeutralsExperienceToLevel, float NeutralsExperienceReceived, int32 NeutralsLevel);
	void ExecuteUbergraph_ReputationBar(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& Temp_struct_Variable_3, const struct FLinearColor& Temp_struct_Variable_4, int32 Temp_int_Variable_1, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FText Temp_text_Variable_5, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class ASHPlayerCharacter* K2Node_DynamicCast_AsSHPlayer_Character, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_MakeLiteralText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_FInterpTo_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, class UClass* K2Node_CustomEvent_NPC, float K2Node_CustomEvent_ReputationCurrentExperience, float K2Node_CustomEvent_ReputationExperienceToLevel, float K2Node_CustomEvent_ReputationExperienceReceived, int32 K2Node_CustomEvent_ReputationLevel, const struct FUIReputationQueue& K2Node_MakeStruct_UIReputationQueue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_1, bool CallFunc_Map_Remove_ReturnValue, TArray<struct FUIReputationQueue>& CallFunc_Map_Values_Values, int32 CallFunc_FCeil_ReturnValue, const struct FUIReputationQueue& CallFunc_Array_Get_Item, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText K2Node_Select_Default, int32 CallFunc_GetUINpcColor_ID, const struct FLinearColor& K2Node_Select_Default_1, class FText K2Node_Select_Default_2, class FText CallFunc_TextToUpper_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_1, float K2Node_CustomEvent_NeutralsCurrentExperience, float K2Node_CustomEvent_NeutralsExperienceToLevel, float K2Node_CustomEvent_NeutralsExperienceReceived, int32 K2Node_CustomEvent_NeutralsLevel, const struct FUIReputationQueue& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Map_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, const struct FUIReputationQueue& K2Node_MakeStruct_UIReputationQueue_1, const struct FUIReputationQueue& K2Node_MakeStruct_UIReputationQueue_2, const struct FUIReputationQueue& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1, const struct FUIReputationQueue& K2Node_MakeStruct_UIReputationQueue_3);
};

}


