#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0x4E9 - 0x4E0)
// BlueprintGeneratedClass Glowing_Pickup_Boss_Glimpse.Glowing_Pickup_Boss_Glimpse_C
class AGlowing_Pickup_Boss_Glimpse_C : public AGlowing_Pickup_Actor_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	enum class EBoss_Glimpse_Types               GlimpseType;                                       // 0x4E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AGlowing_Pickup_Boss_Glimpse_C* GetDefaultObj();

	void UserConstructionScript(enum class EBoss_Glimpse_Types Temp_byte_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, class FName Temp_name_Variable_4, class FName Temp_name_Variable_5, class FName K2Node_Select_Default);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Glowing_Pickup_Boss_Glimpse(int32 EntryPoint, enum class EBoss_Glimpse_Types Temp_byte_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, class FName Temp_name_Variable_4, class FName Temp_name_Variable_5, class FName K2Node_Select_Default);
};

}


