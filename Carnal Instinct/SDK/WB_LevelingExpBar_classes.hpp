#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3C (0x29C - 0x260)
// WidgetBlueprintGeneratedClass WB_LevelingExpBar.WB_LevelingExpBar_C
class UWB_LevelingExpBar_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UImage*                                Image_120;                                         // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          ProgressBar_236;                                   // 0x270(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock;                                         // 0x278(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        Player_Level;                                      // 0x280(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_22F6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAC_Leveling_C*                        Level_System_Component;                            // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Player_Current_Exp;                                // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Player_Limit_Exp;                                  // 0x294(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Percent_Progress_Value;                            // 0x298(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_LevelingExpBar_C* GetDefaultObj();

	float Get_Percent_Progress_Value();
	class FText Get_Player_Limit_Exp_as_Text(class FText CallFunc_Conv_FloatToText_ReturnValue);
	class FText Get_Player_Current_Exp_as_Text(class FText CallFunc_Conv_FloatToText_ReturnValue);
	class FText Get_Player_Level_as_Text(class FText CallFunc_Conv_IntToText_ReturnValue);
	void Event_Refresh_Parameters();
	void Setup_Event_Dispatchers();
	void Construct();
	void Refresh_Progress_Value();
	void ExecuteUbergraph_WB_LevelingExpBar(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAC_Leveling_C* CallFunc_Get_AC_Leveling_Return_Value, float CallFunc_NormalizeToRange_ReturnValue);
};

}


