#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x11 (0x359 - 0x348)
// WidgetBlueprintGeneratedClass WBP_RealmPower.WBP_RealmPower_C
class UWBP_RealmPower_C : public UNWXCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            Txt_RealmPower;                                    // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bAutoGrabCurrentRealmPower;                        // 0x358(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_RealmPower_C* GetDefaultObj();

	void InitializeDesignerPreview();
	void GetPowerText(class FText* Power, class FText CallFunc_GetText_ReturnValue);
	void SetRealmPower(int32 RealmPower, class FText CallFunc_Conv_IntToText_ReturnValue);
	void Construct();
	void ExecuteUbergraph_WBP_RealmPower(int32 EntryPoint, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, int32 CallFunc_GetCurrentRealmPower_RealmPower);
};

}


