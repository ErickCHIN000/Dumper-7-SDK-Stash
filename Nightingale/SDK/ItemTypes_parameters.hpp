#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x130 (0x130 - 0x0)
// Function ItemTypes.ResourceCustomizationDataFunctionLibrary.TryGetResourceCustomizationData
struct UResourceCustomizationDataFunctionLibrary_TryGetResourceCustomizationData_Params
{
public:
	struct FResourceCustomizationDataReference   Reference;                                         // 0x0(0x70)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FResourceCustomizationData            OutData;                                           // 0x70(0xB8)(Parm, OutParm, NativeAccessSpecifierPublic)
	enum class EGetResult                        OutBranches;                                       // 0x128(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CF2[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF0 (0xF0 - 0x0)
// Function ItemTypes.ResourceCustomizationDataFunctionLibrary.NotEqual_FItemDataReference
struct UResourceCustomizationDataFunctionLibrary_NotEqual_FItemDataReference_Params
{
public:
	struct FResourceCustomizationDataReference   A;                                                 // 0x0(0x70)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FResourceCustomizationDataReference   B;                                                 // 0x70(0x70)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xE0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D12[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// Function ItemTypes.ResourceCustomizationDataFunctionLibrary.IsValid
struct UResourceCustomizationDataFunctionLibrary_IsValid_Params
{
public:
	struct FResourceCustomizationDataReference   Reference;                                         // 0x0(0x70)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x70(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D2C[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF0 (0xF0 - 0x0)
// Function ItemTypes.ResourceCustomizationDataFunctionLibrary.EqualEqual_FItemDataReference
struct UResourceCustomizationDataFunctionLibrary_EqualEqual_FItemDataReference_Params
{
public:
	struct FResourceCustomizationDataReference   A;                                                 // 0x0(0x70)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FResourceCustomizationDataReference   B;                                                 // 0x70(0x70)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xE0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D45[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


