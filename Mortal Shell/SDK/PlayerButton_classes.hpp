#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8C (0x2BC - 0x230)
// WidgetBlueprintGeneratedClass PlayerButton.PlayerButton_C
class UPlayerButton_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                AvatarImage;                                       // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               PlayerButton;                                      // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_1;                                       // 0x248(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FPlayerInfo                           PlayerInfo;                                        // 0x250(0x48)(Edit, BlueprintVisible, Net, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                  NameOfPlayer;                                      // 0x298(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UTexture2D*                            ImageOfPlayer;                                     // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        PlayerId;                                          // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UPlayerButton_C* GetDefaultObj();

	void Construct();
	void BndEvt__PlayerButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_PlayerButton(int32 EntryPoint, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class ALobbyGM_C* K2Node_DynamicCast_AsLobby_GM, bool K2Node_DynamicCast_bSuccess);
};

}


