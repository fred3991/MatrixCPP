// $Source: /cvs/sr/src/gemini/source/include/hpeesofsim_api.h,v $ $Revision: 1.3 $ $Date: 2011/08/27 00:18:17 $
//
// platform-specific handling for exported symbols
//


#ifndef HPEESOFSIM_API_H_INCLUDED
#define HPEESOFSIM_API_H_INCLUDED
// Copyright Keysight Technologies 2008 - 2019  


#ifdef _WIN32
# ifdef hpeesofsim_EXE_BUILD
#  define HPEESOFSIM_API __declspec(dllexport)
# else
#  define HPEESOFSIM_API __declspec(dllimport)
# endif
#elif defined(linux)
# define HPEESOFSIM_API __attribute__ ((visibility("default")))
#else
# define HPEESOFSIM_API  // not used
#endif

#if !defined(OPT_BUILD) || DO_INTERNAL_DEBUGGING
# define HPEESOFSIM_API_DEVEL   HPEESOFSIM_API
#else
# define HPEESOFSIM_API_DEVEL
#endif

#ifdef _WIN32
# ifdef gem_CstCmptDLL_DLL_BUILD
#  define CSTCMPT_API __declspec(dllexport)
# else
#  define CSTCMPT_API __declspec(dllimport)
# endif
#elif defined(linux)
# define CSTCMPT_API __attribute__ ((visibility("default")))
#else
# define CSTCMPT_API  // not used
#endif

#if !defined(OPT_BUILD) || DO_INTERNAL_DEBUGGING
# define CSTCMPT_API_DEVEL      CSTCMPT_API
#else
# define CSTCMPT_API_DEVEL
#endif

#ifdef _WIN32
# ifdef gem_EmdsCmptDLL_DLL_BUILD
#  define EMDSCMPT_API __declspec(dllexport)
# else
#  define EMDSCMPT_API __declspec(dllimport)
# endif
#elif defined(linux)
# define EMDSCMPT_API __attribute__ ((visibility("default")))
#else
# define EMDSCMPT_API  // not used
#endif


#if !defined(OPT_BUILD) || DO_INTERNAL_DEBUGGING
# define EMDSCMPT_API_DEVEL     EMDSCMPT_API
#else
# define EMDSCMPT_API_DEVEL
#endif

// gem_MomCmptDLL_DLL_BUILD obsoleted when using new EmMdl4CktIFC
#ifdef _WIN32
# ifdef gem_MomCmptDLL_DLL_BUILD
#  define MOMCMPT_API __declspec(dllexport)
# else
#  define MOMCMPT_API __declspec(dllimport)
# endif
#elif defined(linux)
# define MOMCMPT_API __attribute__ ((visibility("default")))
#else
# define MOMCMPT_API  // not used
#endif

#if !defined(OPT_BUILD) || DO_INTERNAL_DEBUGGING
# define MOMCMPT_API_DEVEL      MOMCMPT_API
#else
# define MOMCMPT_API_DEVEL
#endif

// gem_PMLE_DLL_BUILD obsoleted when using new pmle4CktIFC
#ifdef _WIN32
# ifdef gem_PMLE_DLL_BUILD
#  define PMLE_API __declspec(dllexport)
# else
#  define PMLE_API __declspec(dllimport)
# endif
#elif defined(linux)
# define PMLE_API __attribute__ ((visibility("default")))
#else
# define PMLE_API  // not used
#endif

#if !defined(OPT_BUILD) || DO_INTERNAL_DEBUGGING
# define PMLE_API_DEVEL         PMLE_API
#else
# define PMLE_API_DEVEL
#endif


#ifdef _WIN32
# ifdef ptgem_DLL_BUILD
#  define PTGEM_API __declspec(dllexport)
# else
#  define PTGEM_API __declspec(dllimport)
# endif
#elif defined(linux)
# define PTGEM_API __attribute__ ((visibility("default")))
#else
# define PTGEM_API  // not used
#endif

#if !defined(OPT_BUILD) || DO_INTERNAL_DEBUGGING
# define PTGEM_API_DEVEL        PTGEM_API
#else
# define PTGEM_API_DEVEL
#endif

#ifdef _WIN32
# ifdef ADSSim_DLL_BUILD
#  define ADSSIM_API __declspec(dllexport)
# else
#  define ADSSIM_API __declspec(dllimport)
# endif
#elif defined(linux)
# define ADSSIM_API __attribute__ ((visibility("default")))
#else
# define ADSSIM_API  // not used
#endif

#if !defined(OPT_BUILD) || DO_INTERNAL_DEBUGGING
# define ADSSIM_API_DEVEL       ADSSIM_API
#else
# define ADSSIM_API_DEVEL
#endif

/*
 * For functions exported only because the PHD model needs them.
 */
#define HPEESOFSIM_API_FOR_PHD HPEESOFSIM_API


#endif  // HPEESOFSIM_API_H_INCLUDED

