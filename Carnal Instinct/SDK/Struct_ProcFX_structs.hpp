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

// 0x31 (0x31 - 0x0)
// UserDefinedStruct Struct_ProcFX.Struct_ProcFX
struct FStruct_ProcFX
{
public:
	class UClass*                                FXReference_27_6D3BA0EB4B0C3B8F0223C9B5791752CD;   // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TimeBeforeRespawn_5_8276670F442D1AFEF3E8A581E2244552; // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpawnRadius_7_E5BCCBC14893C4A194EB3FADFB7479B3;    // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpawnChance_9_5CFD8F2042BD01AD797D9F85712A2276;    // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPhysicalSurface                  SpawnSurface_12_FA135BE74A68F161F16F45B140B8DCED;  // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanSpawnonWater_15_0370A6AC422FBB063C0BDE90A8D8BDB3; // 0x15(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         UseMultiObjectSweep_19_774F122E4203512D6F6B4FBCC6F5EC1D; // 0x16(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_231[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MultiObjectAmount_23_7ECA767A418DD3BBC504FB846B564BB4; // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_232[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UClass*>                        MultiObjectTraceClasses_26_4DCDF19C49E11D6F5B3320B2D217233D; // 0x20(0x10)(Edit, BlueprintVisible)
	bool                                         VisualizeTrace_32_50A5889C4A45BD2D10CA46B8DFBA6317; // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}


