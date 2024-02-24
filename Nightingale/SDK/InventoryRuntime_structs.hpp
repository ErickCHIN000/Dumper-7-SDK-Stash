#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x2F0 (0x2F0 - 0x0)
// ScriptStruct InventoryRuntime.InventoryEntry
struct FInventoryEntry
{
public:
	struct FGuid                                 InstanceID;                                        // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FItemDataReference                    ItemId;                                            // 0x10(0x80)(Edit, BlueprintVisible, DisableEditOnTemplate, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Quantity;                                          // 0x90(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ParentContainerType;                               // 0x94(0x1)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_102D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        InstanceDataBitMask;                               // 0x98(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1032[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInstanceData_AddressCard             AddressCard;                                       // 0xA0(0x30)(SaveGame, NativeAccessSpecifierPrivate)
	struct FInstanceData_AmmoClip                Ammo;                                              // 0xD0(0x90)(SaveGame, NativeAccessSpecifierPrivate)
	struct FInstanceData_AttributeModifiers      AttributeModifiers;                                // 0x160(0x20)(SaveGame, NativeAccessSpecifierPrivate)
	struct FInstanceData_CharacteristicInfo      Characteristics;                                   // 0x180(0xC0)(SaveGame, NativeAccessSpecifierPrivate)
	struct FInstanceData_CrafterName             CrafterName;                                       // 0x240(0x10)(SaveGame, NativeAccessSpecifierPrivate)
	struct FInstanceData_CustomizationOverrides  CustomizationOverrides;                            // 0x250(0x10)(SaveGame, NativeAccessSpecifierPrivate)
	struct FInstanceData_Durability              Durability;                                        // 0x260(0x4)(SaveGame, NoDestructor, NativeAccessSpecifierPrivate)
	struct FInstanceData_Fuel                    Fuel;                                              // 0x264(0x4)(SaveGame, NoDestructor, NativeAccessSpecifierPrivate)
	struct FInstanceData_Perks                   Perks;                                             // 0x268(0x10)(SaveGame, NativeAccessSpecifierPrivate)
	struct FInstanceData_Quality                 Quality;                                           // 0x278(0x1)(SaveGame, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_104A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInstanceData_RegionCustomization     RegionCustomization;                               // 0x280(0x38)(SaveGame, NativeAccessSpecifierPrivate)
	struct FInstanceData_SpellTechniques         Spells;                                            // 0x2B8(0x18)(SaveGame, NativeAccessSpecifierPrivate)
	struct FInstanceData_Traits                  Traits;                                            // 0x2D0(0x20)(SaveGame, NativeAccessSpecifierPrivate)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct InventoryRuntime.ContainerCapacityData
struct FContainerCapacityData
{
public:
	bool                                         bHasMaxCapacity;                                   // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1053[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxCapacity;                                       // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct InventoryRuntime.InventoryEntryIdAndQuantity
struct FInventoryEntryIdAndQuantity
{
public:
	struct FGuid                                 InstanceID;                                        // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Quantity;                                          // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct InventoryRuntime.InventoryEntryPersistedArray
struct FInventoryEntryPersistedArray
{
public:
	TArray<struct FInventoryEntry>               Entries;                                           // 0x0(0x10)(BlueprintVisible, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct InventoryRuntime.ItemContainerHandle
struct FItemContainerHandle
{
public:
	class AActor*                                ContainerActor;                                    // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ContainerID;                                       // 0x8(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1075[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


