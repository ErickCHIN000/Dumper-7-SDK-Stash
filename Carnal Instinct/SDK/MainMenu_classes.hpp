#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x21 (0x249 - 0x228)
// BlueprintGeneratedClass MainMenu.MainMenu_C
class AMainMenu_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x228(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_Intro_C*                            IntroRef;                                          // 0x230(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_TemplateGraphic                 TempResolution;                                    // 0x238(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_TemplateGraphic                 TempScreenMode;                                    // 0x239(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E29[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class URPGInventory_GameInstance_C*          GameInstanceRef;                                   // 0x240(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAnimationMode                    In_Animation_Mode;                                 // 0x248(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AMainMenu_C* GetDefaultObj();

	void ContinueLoadWithIntro();
	void ContinueLoadWithoutIntro();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_MainMenu(int32 EntryPoint, class ABP_DummyCharacter_C* CallFunc_GetActorOfClass_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UW_MainMenu_C* CallFunc_Create_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class URPGInventory_GameInstance_C* K2Node_DynamicCast_AsRPGInventory_Game_Instance, bool K2Node_DynamicCast_bSuccess, class UW_Intro_C* CallFunc_Create_ReturnValue_1, TArray<class APlayerController*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
};

}


