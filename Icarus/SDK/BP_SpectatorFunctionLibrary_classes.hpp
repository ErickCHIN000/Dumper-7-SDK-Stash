#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_SpectatorFunctionLibrary.BP_SpectatorFunctionLibrary_C
class UBP_SpectatorFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBP_SpectatorFunctionLibrary_C* GetDefaultObj();

	class ABP_PhotoCamera_C* GetPhotoCameraPawn(class UObject* __WorldContext, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ABP_PhotoCamera_C* K2Node_DynamicCast_AsBP_Photo_Camera, bool K2Node_DynamicCast_bSuccess);
	class ABP_CinematicPawn_C* GetCinematicPawn(class UObject* __WorldContext, class APawn* CallFunc_GetPlayerPawn_ReturnValue, class ABP_CinematicPawn_C* K2Node_DynamicCast_AsBP_Cinematic_Pawn, bool K2Node_DynamicCast_bSuccess);
};

}


