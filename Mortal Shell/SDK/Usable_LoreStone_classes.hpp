#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x26 (0x338 - 0x312)
// BlueprintGeneratedClass Usable_LoreStone.Usable_LoreStone_C
class AUsable_LoreStone_C : public AUsable_Actor_C
{
public:
	uint8                                        Pad_272A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USpotLightComponent*                   SpotLight_0;                                       // 0x318(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh1;                                       // 0x320(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  StoryTimeID;                                       // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UUI_LorePopup_C*                       UI_LorePopup;                                      // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AUsable_LoreStone_C* GetDefaultObj();

	void OnActorUsed(class APlayerController* Controller, bool* Success, class APlayerController* Local_Controller, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsInViewport_ReturnValue, class UUI_LorePopup_C* CallFunc_Create_ReturnValue, class FName CallFunc_ConstructNameFromPrefixLevelAndActor_ReturnValue, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous, bool CallFunc_IsMyNameInChangedSet_ReturnValue);
};

}


