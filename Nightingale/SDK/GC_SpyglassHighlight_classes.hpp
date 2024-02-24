#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x48 - 0x40)
// BlueprintGeneratedClass GC_SpyglassHighlight.GC_SpyglassHighlight_C
class UGC_SpyglassHighlight_C : public UGameplayCueNotify_Static
{
public:
	class FName                                  Socket;                                            // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGC_SpyglassHighlight_C* GetDefaultObj();

	bool OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class AActor* LMyTarget, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue, class ABP_PlayerCameraManager_C* K2Node_DynamicCast_AsBP_Player_Camera_Manager, bool K2Node_DynamicCast_bSuccess);
	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class AActor* LMyTarget, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue, class ABP_PlayerCameraManager_C* K2Node_DynamicCast_AsBP_Player_Camera_Manager, bool K2Node_DynamicCast_bSuccess);
};

}


