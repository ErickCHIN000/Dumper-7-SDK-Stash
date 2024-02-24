#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x2E0 - 0x2C0)
// BlueprintGeneratedClass BP_NotificationManager.BP_NotificationManager_C
class ABP_NotificationManager_C : public AManagerBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class ACharacter*>                    Players;                                           // 0x2D0(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ABP_NotificationManager_C* GetDefaultObj();

	void ShowGlobalNotificationAllPlayers(class APlayerController* Player_Controller, class FText NotificationHeadline, class FText NotificationType, double DisplayTime, bool CallFunc_HasAuthority_ReturnValue, class AHUD* CallFunc_GetHUD_ReturnValue, TScriptInterface<class IBPI_HUD_Manager_C> K2Node_DynamicCast_AsBPI_HUD_Manager, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void RemovePlayer(class ACharacter* Player, bool CallFunc_Array_RemoveItem_ReturnValue);
	void AddPlayer(class ACharacter* Player, int32 CallFunc_Array_Add_ReturnValue);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_NotificationManager(int32 EntryPoint);
};

}


