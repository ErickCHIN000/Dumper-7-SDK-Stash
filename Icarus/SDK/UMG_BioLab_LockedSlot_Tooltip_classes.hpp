#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x55 (0x2B5 - 0x260)
// WidgetBlueprintGeneratedClass UMG_BioLab_LockedSlot_Tooltip.UMG_BioLab_LockedSlot_Tooltip_C
class UUMG_BioLab_LockedSlot_Tooltip_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            ChallengeDescription;                              // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          ChallengeDetailsVBox;                              // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ChallengeProgress;                                 // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          ChallengeProgressBar;                              // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ChallengeTitle;                                    // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            UnlockDescription;                                 // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FChallengesRowHandle                  Challenge;                                         // 0x298(0x18)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        Progress;                                          // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         IsActiveChallenge;                                 // 0x2B4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UUMG_BioLab_LockedSlot_Tooltip_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_UMG_BioLab_LockedSlot_Tooltip(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FChallenge& CallFunc_GetChallengesStruct_Challenges, enum class EValid CallFunc_GetChallengesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
};

}


