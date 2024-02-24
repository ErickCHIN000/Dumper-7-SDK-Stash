#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x138 (0x1D8 - 0xA0)
// BlueprintGeneratedClass FirearmComponent.FirearmComponent_C
class UFirearmComponent_C : public UActorComponent
{
public:
	TMap<class FName, double>                    Sights;                                            // 0xA0(0x50)(Edit, BlueprintVisible)
	TMap<class FName, double>                    Scopes;                                            // 0xF0(0x50)(Edit, BlueprintVisible)
	TMap<class FName, struct FVector2D>          Foregrips;                                         // 0x140(0x50)(Edit, BlueprintVisible)
	class FName                                  CurrentSight;                                      // 0x190(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CurrentForegrip;                                   // 0x198(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SightAttached_;                                    // 0x1A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ForegripAttached_;                                 // 0x1A1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_228F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CurrentSuppressor;                                 // 0x1A4(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SuppressorAttached_;                               // 0x1AC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CompensatorAttached_;                              // 0x1AD(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_229C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CurrentCompensator;                                // 0x1B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          Suppressors;                                       // 0x1B8(0x10)(Edit, BlueprintVisible)
	TArray<class FName>                          Compensators;                                      // 0x1C8(0x10)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UFirearmComponent_C* GetDefaultObj();

	void SetCurrentCompensator(class FName CurrentCompensator, bool Compensator_, bool CallFunc_Array_Contains_ReturnValue);
	void SetCurrentSuppressor(class FName CurrentSuppressor, bool Suppressor_, bool CallFunc_Array_Contains_ReturnValue);
	void SetCurrentForegrip(class FName CurrentForegrip, bool Foregrip_, bool CallFunc_Map_Contains_ReturnValue);
	void SetCurrentSight(class FName CurrentSight, bool Sight_, bool CallFunc_Map_Contains_ReturnValue, bool CallFunc_Map_Contains_ReturnValue_1);
	void GetSight(bool* Sight, double* Zoom, bool* LongRange_, class FName* ID, double CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, double CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1);
	void GetCompensator(bool* CompensatorAttached_);
	void GetSuppressor(bool* SuppressorAttached_);
	void GetForegrip(double* ForegripVertical, double* ForegripHorizontal, const struct FVector2D& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y);
};

}


