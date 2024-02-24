#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x240 - 0x230)
// WidgetBlueprintGeneratedClass GameOver.GameOver_C
class UGameOver_C : public UUserWidget
{
public:
	class UTextBlock*                            RestartGameCounter;                                // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AGameplayPC_C*                         ControllerReference;                               // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGameOver_C* GetDefaultObj();

	class FText Get_RestartGameCounter_Text_0(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_Conv_IntToText_ReturnValue);
	class FText GetText_0();
};

}


