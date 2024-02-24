#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x270 - 0x260)
// WidgetBlueprintGeneratedClass WBP_SimplePlayerCoinDisplay.WBP_SimplePlayerCoinDisplay_C
class UWBP_SimplePlayerCoinDisplay_C : public UUserWidget
{
public:
	class UTextBlock*                            BlueOrbText;                                       // 0x260(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            GoldText;                                          // 0x268(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_SimplePlayerCoinDisplay_C* GetDefaultObj();

	class FText Get_BlueOrbText_Text_0(class UGISProgression* CallFunc_GetGameInstanceSubsystem_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue);
	class FText Get_Text_Text_0(class UGISProgression* CallFunc_GetGameInstanceSubsystem_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue);
};

}


