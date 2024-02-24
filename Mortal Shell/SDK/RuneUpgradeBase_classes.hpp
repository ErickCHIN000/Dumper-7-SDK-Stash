#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB1 (0xD9 - 0x28)
// BlueprintGeneratedClass RuneUpgradeBase.RuneUpgradeBase_C
class URuneUpgradeBase_C : public UDHObjectWithActorOuter
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x28(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                  Rune_ID;                                           // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class Enum_Rune_Category                Rune_Category;                                     // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class Enum_Rune_Type                    Rune_Type;                                         // 0x39(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class Enum_Rune_Tier                    Rune_Tier;                                         // 0x3A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_54B[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Rune_Values                   Rune_X_;                                           // 0x3C(0x14)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FStruct_Rune_Values                   Rune_X;                                            // 0x50(0x14)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        Rune_Level;                                        // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        Rune_Misc_X;                                       // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_551[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class Enum_Rune_Tier, class UTexture2D*> Rune_Backgrounds;                                  // 0x70(0x50)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UTexture2D*                            Rune_Texture;                                      // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class ABarbarous_StormMode_C*                Barbarous;                                         // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UUI_Runes_StatusContainer_C*           UI_RunesStatusContainer;                           // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         NoIcon;                                            // 0xD8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class URuneUpgradeBase_C* GetDefaultObj();

	void GetValueForTier(int32* RuneX, enum class Enum_Rune_Tier Temp_byte_Variable, int32 Temp_int_Variable, int32 K2Node_Select_Default);
	float GetChanceForTier(enum class Enum_Rune_Tier Temp_byte_Variable, int32 Temp_int_Variable, int32 K2Node_Select_Default, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue);
	bool CanHealPlayer(bool CallFunc_NotEqual_ByteByte_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue);
	void Rune_Enable();
	void Rune_Disable();
	void Rune_Add();
	void Rune_Remove();
	void ExecuteUbergraph_RuneUpgradeBase(int32 EntryPoint, int32 CallFunc_AddRuneStatusIcon_UniqueID, bool CallFunc_Not_PreBool_ReturnValue);
};

}


