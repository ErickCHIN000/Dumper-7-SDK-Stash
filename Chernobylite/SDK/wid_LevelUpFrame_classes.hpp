#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x2D8 - 0x260)
// WidgetBlueprintGeneratedClass wid_LevelUpFrame.wid_LevelUpFrame_C
class UWid_LevelUpFrame_C : public UUserWidget
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
	class UTextBlock*                            SkillPointsTextBox;                                // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  SkillPointsText;                                   // 0x2A8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  NewLevelText;                                      // 0x2C0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWid_LevelUpFrame_C* GetDefaultObj();

	void GetSoundToPlay(class UAkAudioEvent** Event);
	void CapitalizeText(class FText CallFunc_TextToUpper_ReturnValue);
	void UpdateSkillPointsText(class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Replace_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_wid_LevelUpFrame(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


