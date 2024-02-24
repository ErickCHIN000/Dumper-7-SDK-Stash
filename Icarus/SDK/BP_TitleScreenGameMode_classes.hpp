#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x318 - 0x308)
// BlueprintGeneratedClass BP_TitleScreenGameMode.BP_TitleScreenGameMode_C
class ABP_TitleScreenGameMode_C : public AIcarusGameModeTitlescreen
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x308(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x310(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_TitleScreenGameMode_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_TitleScreenGameMode(int32 EntryPoint, class UIcarusErrorSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UIcarusGameInstance* K2Node_DynamicCast_AsIcarus_Game_Instance, bool K2Node_DynamicCast_bSuccess);
};

}


