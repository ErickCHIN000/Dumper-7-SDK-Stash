#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xD48 - 0xD40)
// BlueprintGeneratedClass BP_LoginChar.BP_LoginChar_C
class ABP_LoginChar_C : public ASophiaCharacter
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xD40(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_LoginChar_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_LoginChar(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UWBP_LoginScreenUpdated_C* CallFunc_Create_ReturnValue, class USophiaGameInstance* K2Node_DynamicCast_AsSophia_Game_Instance, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UWBP_MainMenu_Dedicated_C* CallFunc_Create_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class USophiaGameInstance* K2Node_DynamicCast_AsSophia_Game_Instance_1, bool K2Node_DynamicCast_bSuccess_1);
};

}


