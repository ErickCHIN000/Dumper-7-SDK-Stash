#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0x308 - 0x260)
// WidgetBlueprintGeneratedClass wid_VRGamesBossFrame.wid_VRGamesBossFrame_C
class UWid_VRGamesBossFrame_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                      Hide;                                              // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Show;                                              // 0x270(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                LeftCorner;                                        // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            LevelUpText;                                       // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                MedalIcon;                                         // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Middle;                                            // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                RightCorner;                                       // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  SkillPointsText;                                   // 0x2A0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  NewLevelText;                                      // 0x2B8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        Boss_number;                                       // 0x2D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1AED[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  NewLevelText_0;                                    // 0x2D8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  NewLevelText_1;                                    // 0x2F0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWid_VRGamesBossFrame_C* GetDefaultObj();

	void GetSoundToPlay(class UAkAudioEvent** Event);
	void CapitalizeText(class FText CallFunc_TextToUpper_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess, class FText CallFunc_TextToUpper_ReturnValue_2);
	void UpdateSkillPointsText();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_wid_VRGamesBossFrame(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


