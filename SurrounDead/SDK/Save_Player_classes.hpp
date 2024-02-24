#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C8 (0x208 - 0x40)
// BlueprintGeneratedClass Save_Player.Save_Player_C
class USave_Player_C : public UEMSCustomSaveGame
{
public:
	TArray<struct FS_ReplicatedContainerInfo>    ReplicatedContainers;                              // 0x40(0x10)(Edit, BlueprintVisible, SaveGame, ContainsInstancedReference)
	TArray<int32>                                MainUIDs;                                          // 0x50(0x10)(Edit, BlueprintVisible, SaveGame)
	TArray<struct FS_InvWeight>                  Weights;                                           // 0x60(0x10)(Edit, BlueprintVisible, SaveGame)
	TArray<int32>                                ActionbarUIDs;                                     // 0x70(0x10)(Edit, BlueprintVisible, SaveGame)
	class UMaterialInstance*                     SkinColor;                                         // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                           HairType;                                          // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     HairColor;                                         // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                           BeardType;                                         // 0x98(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     BeardColor;                                        // 0xA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, NoDestructor, HasGetValueTypeHash)
	class FString                                Forename;                                          // 0xA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, HasGetValueTypeHash)
	class FString                                Surname;                                           // 0xB8(0x10)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, HasGetValueTypeHash)
	class FString                                Sex;                                               // 0xC8(0x10)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, HasGetValueTypeHash)
	class FString                                Age;                                               // 0xD8(0x10)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, HasGetValueTypeHash)
	class UStaticMesh*                           EyebrowsType;                                      // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Occupation                   Occupation;                                        // 0xF0(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C15[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ZombieKills;                                       // 0xF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        BossZombieKills;                                   // 0xF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AnimalKills;                                       // 0xFC(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        HumanKills;                                        // 0x100(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        DaysSurvived;                                      // 0x104(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DistanceTravelled;                                 // 0x108(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        InfestationsDestroyed;                             // 0x110(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C25[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            PlayerLocation;                                    // 0x120(0x60)(Edit, BlueprintVisible, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RespawnLocation;                                   // 0x180(0x60)(Edit, BlueprintVisible, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RespawnLocationSet_;                               // 0x1E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C35[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           AccessoryType1;                                    // 0x1E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                           AccessoryType2;                                    // 0x1F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                           AccessoryType3;                                    // 0x1F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                           MouthType;                                         // 0x200(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USave_Player_C* GetDefaultObj();

};

}


