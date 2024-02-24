#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB0 (0x2E0 - 0x230)
// WidgetBlueprintGeneratedClass ConnectedPlayer.ConnectedPlayer_C
class UConnectedPlayer_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                AvatarImage;                                       // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SelectedCharacterImage;                            // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_0;                                       // 0x248(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_1;                                       // 0x250(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FPlayerInfo                           PlayersInfo;                                       // 0x258(0x48)(Edit, BlueprintVisible, Net, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                  NameOfPlayer;                                      // 0x2A0(0x18)(Edit, BlueprintVisible, Net, DisableEditOnInstance)
	class UTexture2D*                            PlayerAvatar;                                      // 0x2B8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            ImageOfSelectedCharacter;                          // 0x2C0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  StatusOfPlayer;                                    // 0x2C8(0x18)(Edit, BlueprintVisible, Net, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UConnectedPlayer_C* GetDefaultObj();

	void Construct();
	void ExecuteUbergraph_ConnectedPlayer(int32 EntryPoint);
};

}


