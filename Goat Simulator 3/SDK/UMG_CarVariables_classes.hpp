#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x2C0 - 0x260)
// WidgetBlueprintGeneratedClass UMG_CarVariables.UMG_CarVariables_C
class UUMG_CarVariables_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UEditableTextBox*                      AudioRPM_Text;                                     // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          AudioRPMBar;                                       // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                      EngineRotSpeedText;                                // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                      Gear;                                              // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                      Load_Text;                                         // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          ProgressBar_Load;                                  // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          RotSpeed_Bar;                                      // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                      RPM_Text;                                          // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          RPMBar;                                            // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                      Speed_Text;                                        // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          SpeedBar;                                          // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_CarVariables_C* GetDefaultObj();

	void UpdateCarStats(float RPM, int32 Speed, int32 Gear, float MaxRPM, float AudioRPM, float Load, float Engine_Rotation_Speed);
	void ExecuteUbergraph_UMG_CarVariables(int32 EntryPoint, float K2Node_CustomEvent_RPM, int32 K2Node_CustomEvent_Speed, int32 K2Node_CustomEvent_Gear, float K2Node_CustomEvent_MAXRPM, float K2Node_CustomEvent_AudioRPM, float K2Node_CustomEvent_Load, float K2Node_CustomEvent_Engine_Rotation_Speed, class FText CallFunc_Conv_FloatToText_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue_1, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_1, int64 CallFunc_FFloor64_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_2, class FText CallFunc_Conv_Int64ToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_3, int64 CallFunc_FFloor64_ReturnValue_1, class FText CallFunc_Conv_Int64ToText_ReturnValue_1);
};

}


