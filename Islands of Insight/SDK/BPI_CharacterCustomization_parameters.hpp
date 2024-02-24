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

// 0x10 (0x10 - 0x0)
// Function BPI_CharacterCustomization.BPI_CharacterCustomization_C.OnMaterialScalarValueChanged
struct IBPI_CharacterCustomization_C_OnMaterialScalarValueChanged_Params
{
public:
	int32                                        Wetness;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Name;                                              // 0x4(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Divisor;                                           // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function BPI_CharacterCustomization.BPI_CharacterCustomization_C.OnSkinEffectsChanged
struct IBPI_CharacterCustomization_C_OnSkinEffectsChanged_Params
{
public:
	bool                                         Sheen;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Emissive;                                          // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Edge;                                              // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function BPI_CharacterCustomization.BPI_CharacterCustomization_C.OnTrailColorChanged
struct IBPI_CharacterCustomization_C_OnTrailColorChanged_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BPI_CharacterCustomization.BPI_CharacterCustomization_C.OnHairColorChanged
struct IBPI_CharacterCustomization_C_OnHairColorChanged_Params
{
public:
	int32                                        Val;                                               // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BPI_CharacterCustomization.BPI_CharacterCustomization_C.OnSkinColorChanged
struct IBPI_CharacterCustomization_C_OnSkinColorChanged_Params
{
public:
	int32                                        Val;                                               // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BPI_CharacterCustomization.BPI_CharacterCustomization_C.OnHeadPieceColorChanged
struct IBPI_CharacterCustomization_C_OnHeadPieceColorChanged_Params
{
public:
	int32                                        Val;                                               // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BPI_CharacterCustomization.BPI_CharacterCustomization_C.OnGlovesColorChanged
struct IBPI_CharacterCustomization_C_OnGlovesColorChanged_Params
{
public:
	int32                                        Val;                                               // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BPI_CharacterCustomization.BPI_CharacterCustomization_C.OnClothesColorChanged
struct IBPI_CharacterCustomization_C_OnClothesColorChanged_Params
{
public:
	int32                                        Val;                                               // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BPI_CharacterCustomization.BPI_CharacterCustomization_C.GetCustomizationData
struct IBPI_CharacterCustomization_C_GetCustomizationData_Params
{
public:
	struct FCustomizationData                    Info;                                              // 0x0(0x28)(Parm, OutParm, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function BPI_CharacterCustomization.BPI_CharacterCustomization_C.OnHairChanged
struct IBPI_CharacterCustomization_C_OnHairChanged_Params
{
public:
	int32                                        Val;                                               // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BPI_CharacterCustomization.BPI_CharacterCustomization_C.OnGlovesChanged
struct IBPI_CharacterCustomization_C_OnGlovesChanged_Params
{
public:
	int32                                        Val;                                               // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BPI_CharacterCustomization.BPI_CharacterCustomization_C.OnHeadPieceChanged
struct IBPI_CharacterCustomization_C_OnHeadPieceChanged_Params
{
public:
	int32                                        Val;                                               // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BPI_CharacterCustomization.BPI_CharacterCustomization_C.OnClothesChanged
struct IBPI_CharacterCustomization_C_OnClothesChanged_Params
{
public:
	int32                                        Val;                                               // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPI_CharacterCustomization.BPI_CharacterCustomization_C.GetCustomizationWidget
struct IBPI_CharacterCustomization_C_GetCustomizationWidget_Params
{
public:
	class UWBP_CharacterCreation2_C*             Return;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BPI_CharacterCustomization.BPI_CharacterCustomization_C.OnEnterExitWingsMenu
struct IBPI_CharacterCustomization_C_OnEnterExitWingsMenu_Params
{
public:
	bool                                         Val;                                               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function BPI_CharacterCustomization.BPI_CharacterCustomization_C.OnChangeGlideTrailColor
struct IBPI_CharacterCustomization_C_OnChangeGlideTrailColor_Params
{
public:
	int32                                        Val;                                               // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BPI_CharacterCustomization.BPI_CharacterCustomization_C.OnChangedWingsColor
struct IBPI_CharacterCustomization_C_OnChangedWingsColor_Params
{
public:
	int32                                        Val;                                               // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BPI_CharacterCustomization.BPI_CharacterCustomization_C.OnChangedWingsMesh
struct IBPI_CharacterCustomization_C_OnChangedWingsMesh_Params
{
public:
	int32                                        Val;                                               // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


