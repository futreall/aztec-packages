// AUTOGENERATED FILE
#pragma once

#include "barretenberg/relations/generic_permutation/generic_permutation_relation.hpp"

#include <cstddef>
#include <tuple>

namespace bb {

class perm_rng_cmp_hi_permutation_settings {
  public:
    // This constant defines how many columns are bundled together to form each set.
    constexpr static size_t COLUMNS_PER_SET = 2;

    template <typename AllEntities> static inline auto inverse_polynomial_is_computed_at_row(const AllEntities& in)
    {
        return (in.range_check_cmp_hi_bits_rng_chk == 1 || in.cmp_sel_rng_chk == 1);
    }

    template <typename AllEntities> static inline auto get_const_entities(const AllEntities& in)
    {
        return std::forward_as_tuple(in.perm_rng_cmp_hi_inv,
                                     in.range_check_cmp_hi_bits_rng_chk,
                                     in.range_check_cmp_hi_bits_rng_chk,
                                     in.cmp_sel_rng_chk,
                                     in.range_check_clk,
                                     in.range_check_value,
                                     in.cmp_range_chk_clk,
                                     in.cmp_a_hi);
    }

    template <typename AllEntities> static inline auto get_nonconst_entities(AllEntities& in)
    {
        return std::forward_as_tuple(in.perm_rng_cmp_hi_inv,
                                     in.range_check_cmp_hi_bits_rng_chk,
                                     in.range_check_cmp_hi_bits_rng_chk,
                                     in.cmp_sel_rng_chk,
                                     in.range_check_clk,
                                     in.range_check_value,
                                     in.cmp_range_chk_clk,
                                     in.cmp_a_hi);
    }
};

template <typename FF_>
class perm_rng_cmp_hi_relation : public GenericPermutationRelation<perm_rng_cmp_hi_permutation_settings, FF_> {
  public:
    static constexpr const char* NAME = "PERM_RNG_CMP_HI";
};
template <typename FF_> using perm_rng_cmp_hi = GenericPermutation<perm_rng_cmp_hi_permutation_settings, FF_>;

} // namespace bb