#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x250 - 0x230)
// WidgetBlueprintGeneratedClass RespawnTimer.RespawnTimer_C
class URespawnTimer_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            KilledByText;                                      // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            RespawnCounter;                                    // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AGameplayPC_C*                         ControllerReference;                               // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class URespawnTimer_C* GetDefaultObj();

	class FText Get_RespawnCounter_Text_0(class FText CallFunc_Conv_IntToText_ReturnValue);
	void Construct();
	void ExecuteUbergraph_RespawnTimer(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess);
};

}


